try:
    a,b,c=4,3,6
    def h(a):
        a+=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=9,0,5
    print(h(a),a,b,c)
    
except: print('error')
