try:
    a,b,c=4,8,2
    def f(b):
        a=4
        b-=1
        c=5
        return a+b+c
    
    a,b,c=7,1,3
    print(f(a),a,b,c)
    
except: print('error')
