try:
    a,b,c=7,2,9
    def f(b):
        a-=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,1,3
    print(f(a),a,b,c)
    
except: print('error')
