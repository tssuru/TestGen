try:
    a,b,c=8,7,3
    def f(b):
        a+=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=2,1,0
    print(f(a),a,b,c)
    
except: print('error')
