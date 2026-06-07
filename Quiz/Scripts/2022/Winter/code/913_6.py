try:
    a,b,c=1,8,7
    def f(b):
        a=4
        b-=4
        c=2
        return a+b+c
    
    a,b,c=0,2,5
    print(f(a),a,b,c)
    
except: print('error')
