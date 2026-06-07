try:
    a,b,c=5,0,8
    def h(a):
        a=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,4,6
    print(h(a),a,b,c)
    
except: print('error')
