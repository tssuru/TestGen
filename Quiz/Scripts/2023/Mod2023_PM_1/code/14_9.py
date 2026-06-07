try:
    a,b,c=2,8,9
    def f(b):
        a+=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,1,3
    print(f(a),a,b,c)
    
except: print('error')
