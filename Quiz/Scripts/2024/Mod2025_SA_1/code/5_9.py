try:
    a,b,c=4,2,8
    def f(a):
        a=2
        b*=3
        c=1
        return a+b+c
    
    a,b,c=1,3,6
    print(f(a),a,b,c)
except: print('error')
