try:
    a,b,c=5,0,1
    def f(b):
        a-=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,2,4
    print(f(a),a,b,c)
    
except: print('error')
