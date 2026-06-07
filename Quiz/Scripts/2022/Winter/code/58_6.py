try:
    a,b,c=4,9,6
    def f(a):
        a=5
        b-=4
        c=1
        return a+b+c
    
    a,b,c=1,7,8
    print(f(a),a,b,c)
    
except: print('error')
