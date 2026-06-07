try:
    a,b,c=9,8,0
    def h(b):
        global c
        a=4
        b*=4
        c=1
        return a+b+c
    
    a,b,c=3,7,9
    print(h(a),a,b,c)
    
except: print('error')
