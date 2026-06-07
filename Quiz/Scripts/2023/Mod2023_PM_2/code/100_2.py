try:
    a,b,c=8,5,8
    def f(b):
        a=2
        b+=4
        c=2
        return a+b+c
    
    a,b,c=0,5,7
    print(f(a),a,b,c)
    
except: print('error')
