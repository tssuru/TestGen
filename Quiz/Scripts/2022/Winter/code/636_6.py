try:
    a,b,c=0,8,2
    def f(b):
        a=3
        b*=2
        c=4
        return a+b+c
    
    a,b,c=9,7,0
    print(f(a),a,b,c)
    
except: print('error')
