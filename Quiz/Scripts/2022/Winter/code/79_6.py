try:
    a,b,c=0,5,7
    def f(a):
        a=2
        b-=2
        c=3
        return a+b+c
    
    a,b,c=6,5,9
    print(f(a),a,b,c)
    
except: print('error')
