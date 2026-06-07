try:
    a,b,c=0,3,1
    def h(a):
        global c
        a=1
        b*=3
        c=2
        return a+b+c
    
    a,b,c=6,2,8
    print(h(a),a,b,c)
    
except: print('error')
