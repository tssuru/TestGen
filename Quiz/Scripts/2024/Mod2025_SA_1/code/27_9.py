try:
    a,b,c=2,4,8
    def f(b):
        a=1
        b=3
        c=1
        return a+b+c
    
    a,b,c=6,7,2
    print(f(a),a,b,c)
except: print('error')
