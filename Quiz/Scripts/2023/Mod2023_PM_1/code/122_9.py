try:
    a,b,c=8,0,3
    def f(b):
        a=2
        b-=3
        c=5
        return a+b+c
    
    a,b,c=4,6,2
    print(f(a),a,b,c)
    
except: print('error')
