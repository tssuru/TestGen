try:
    a,b,c=6,3,9
    def h(a):
        global c
        a+=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=2,8,4
    print(h(a),a,b,c)
    
except: print('error')
