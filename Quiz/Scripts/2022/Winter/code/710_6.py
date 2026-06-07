try:
    a,b,c=7,6,8
    def h(a):
        a=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=2,4,7
    print(h(a),a,b,c)
    
except: print('error')
