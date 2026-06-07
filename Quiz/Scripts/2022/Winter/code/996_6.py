try:
    a,b,c=0,5,3
    def f(b):
        a-=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,1,9
    print(f(a),a,b,c)
    
except: print('error')
