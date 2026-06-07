try:
    a,b,c=6,2,3
    def f(a):
        a*=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=0,5,1
    print(f(a),a,b,c)
    
except: print('error')
