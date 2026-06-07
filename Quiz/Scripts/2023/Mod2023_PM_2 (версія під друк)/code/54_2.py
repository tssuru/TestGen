try:
    a,b,c=9,8,6
    def f(b):
        a=5
        b-=4
        c=3
        return a+b+c
    
    a,b,c=1,2,5
    print(f(a),a,b,c)
    
except: print('error')
