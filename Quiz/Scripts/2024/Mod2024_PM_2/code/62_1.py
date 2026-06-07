try:
    a,b,c=6,8,7
    def h(b):
        global c
        a=2
        b-=3
        c=5
        return a+b+c
    
    a,b,c=3,7,4
    print(h(a),a,b,c)
    
except: print('error')
