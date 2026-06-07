try:
    a,b,c=5,1,9
    def f(a):
        a=1
        b=5
        c=1
        return a+b+c
    
    a,b,c=3,4,0
    print(f(a),a,b,c)
    
except: print('error')
