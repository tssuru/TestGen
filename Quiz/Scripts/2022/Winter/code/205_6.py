try:
    a,b,c=9,8,1
    def f(b):
        a=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=6,2,0
    print(f(a),a,b,c)
    
except: print('error')
