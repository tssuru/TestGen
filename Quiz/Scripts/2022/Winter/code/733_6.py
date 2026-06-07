try:
    a,b,c=7,8,5
    def f(b):
        a=5
        b-=4
        c=2
        return a+b+c
    
    a,b,c=2,1,3
    print(f(a),a,b,c)
    
except: print('error')
