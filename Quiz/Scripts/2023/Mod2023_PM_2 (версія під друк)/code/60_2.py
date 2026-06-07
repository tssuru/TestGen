try:
    a,b,c=4,8,5
    def f(b):
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=6,2,3
    print(f(a),a,b,c)
    
except: print('error')
