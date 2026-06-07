try:
    a,b,c=9,3,6
    def h(a):
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=0,8,1
    print(h(a),a,b,c)
    
except: print('error')
