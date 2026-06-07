try:
    a,b,c=0,7,1
    def f(b):
        a-=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,2,9
    print(f(a),a,b,c)
    
except: print('error')
