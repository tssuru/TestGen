try:
    a,b,c=0,3,7
    def f(a):
        a=2
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,3,0
    print(f(a),a,b,c)
    
except: print('error')
