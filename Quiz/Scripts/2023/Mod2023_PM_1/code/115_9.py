try:
    a,b,c=7,3,5
    def f(b):
        a=5
        b-=2
        c=5
        return a+b+c
    
    a,b,c=7,2,0
    print(f(a),a,b,c)
    
except: print('error')
