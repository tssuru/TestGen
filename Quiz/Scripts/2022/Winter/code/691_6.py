try:
    a,b,c=1,5,8
    def f(a):
        a=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,5,8
    print(f(a),a,b,c)
    
except: print('error')
