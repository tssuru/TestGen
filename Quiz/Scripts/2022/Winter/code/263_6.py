try:
    a,b,c=1,9,2
    def f(a):
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=8,8,3
    print(f(a),a,b,c)
    
except: print('error')
