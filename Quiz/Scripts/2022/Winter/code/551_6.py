try:
    a,b,c=2,0,2
    def f(b):
        a=1
        b=5
        c=1
        return a+b+c
    
    a,b,c=9,8,5
    print(f(a),a,b,c)
    
except: print('error')
