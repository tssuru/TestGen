try:
    a,b,c=3,8,1
    def h(b):
        global c
        a=5
        b*=4
        c=1
        return a+b+c
    
    a,b,c=9,6,2
    print(h(a),a,b,c)
    
except: print('error')
