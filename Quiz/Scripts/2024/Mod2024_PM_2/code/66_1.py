try:
    a,b,c=9,2,5
    def f(a):
        a=4
        b*=1
        c=5
        return a+b+c
    
    a,b,c=0,4,8
    print(f(a),a,b,c)
    
except: print('error')
