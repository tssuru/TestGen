try:
    a,b,c=6,2,5
    def h(b):
        global c
        a=2
        b-=5
        c=5
        return a+b+c
    
    a,b,c=7,4,8
    print(h(a),a,b,c)
    
except: print('error')
