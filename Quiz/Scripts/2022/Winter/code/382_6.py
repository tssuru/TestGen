try:
    a,b,c=4,8,7
    def f(b):
        a-=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,3,9
    print(f(a),a,b,c)
    
except: print('error')
