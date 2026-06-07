try:
    a,b,c=6,0,1
    def f(a):
        a*=4
        b=2
        c=4
        return a+b+c
    
    a,b,c=7,6,2
    print(f(a),a,b,c)
    
except: print('error')
