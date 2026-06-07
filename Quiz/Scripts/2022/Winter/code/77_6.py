try:
    a,b,c=9,8,7
    def h(a):
        global c
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,6,4
    print(h(a),a,b,c)
    
except: print('error')
