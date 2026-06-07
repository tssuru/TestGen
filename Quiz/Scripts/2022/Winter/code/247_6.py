try:
    a,b,c=3,0,7
    def h(a):
        global c
        a-=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=5,5,8
    print(h(a),a,b,c)
    
except: print('error')
