try:
    a,b,c=3,6,2
    def f(b):
        a*=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=8,3,1
    print(f(a),a,b,c)
    
except: print('error')
