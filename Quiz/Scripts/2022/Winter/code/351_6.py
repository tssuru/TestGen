try:
    a,b,c=6,8,3
    def f(b):
        a=5
        b-=2
        c=1
        return a+b+c
    
    a,b,c=4,7,5
    print(f(a),a,b,c)
    
except: print('error')
