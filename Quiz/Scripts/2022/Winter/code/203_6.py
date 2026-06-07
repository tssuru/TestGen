try:
    a,b,c=2,1,5
    def f(a):
        a=1
        b-=4
        c=4
        return a+b+c
    
    a,b,c=6,5,7
    print(f(a),a,b,c)
    
except: print('error')
