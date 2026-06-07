try:
    a,b,c=3,1,9
    def f(a):
        a=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=4,5,6
    print(f(a),a,b,c)
    
except: print('error')
