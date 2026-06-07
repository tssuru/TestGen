try:
    a,b,c=6,8,7
    def f(a):
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=1,0,3
    print(f(a),a,b,c)
    
except: print('error')
