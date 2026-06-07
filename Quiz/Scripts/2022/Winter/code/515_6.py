try:
    a,b,c=1,3,0
    def f(a):
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=9,4,3
    print(f(a),a,b,c)
    
except: print('error')
