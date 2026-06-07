try:
    a,b,c=2,8,7
    def h(a):
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=5,3,6
    print(h(a),a,b,c)
    
except: print('error')
