try:
    a,b,c=5,0,8
    def f(b):
        a=1
        b+=4
        c=2
        return a+b+c
    
    a,b,c=1,7,3
    print(f(a),a,b,c)
    
except: print('error')
