try:
    a,b,c=6,9,7
    def f(b):
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=4,1,8
    print(f(a),a,b,c)
    
except: print('error')
