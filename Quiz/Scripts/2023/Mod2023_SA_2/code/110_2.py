try:
    a,b,c=2,4,8
    def h(b):
        global c
        a=4
        b-=2
        c=3
        return a+b+c
    
    a,b,c=9,7,6
    print(h(a),a,b,c)
    
except: print('error')
