try:
    a,b,c=0,8,3
    def f(a):
        a=4
        b+=5
        c=1
        return a+b+c
    
    a,b,c=5,6,4
    print(f(a),a,b,c)
    
except: print('error')
