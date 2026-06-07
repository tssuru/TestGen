try:
    a,b,c=4,8,0
    def h(a):
        global c
        a-=2
        b=3
        c=3
        return a+b+c
    
    a,b,c=1,7,2
    print(h(a),a,b,c)
    
except: print('error')
